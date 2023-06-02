import requests
import json
import sys
import os
from bs4 import BeautifulSoup

class Scrape : 
    def __init__(self) : 
        self.getData()
        self.filterSubmission()
        self.writeToFile()
    
    def getData(self) : 
        print('-------------------------------------------------------------------------------------')
        self.handler = str(input('Input your codeforces handler : '))
        self.dir_name = str(input('Input the folder name : '))
        cf_url = 'https://codeforces.com/api/user.status?handle=' + self.handler
        print('Getting your submissions...')
        response = requests.get(cf_url)
        if(response.status_code != 200) : 
            print("No matching handler found")
            sys.exit(0)

        self.data = json.loads(response.content)
        print('Data submissions collected')
        print('-------------------------------------------------------------------------------------')
    
    def filterSubmission(self) : 
        print('-------------------------------------------------------------------------------------')
        self.filtered = []
        exist = set()
        print('Filtering your submissions')

        for result in self.data['result']:
            # you can change the below code to get submission that isnt verdict == OK
            if result['verdict'] == 'OK':
                problem_name = result['problem']['name']
                if problem_name not in exist:
                    self.filtered.append(result)
                    exist.add(problem_name)
        print('Filtering done')
        print('-------------------------------------------------------------------------------------')
            
    def madeLink(self, result) : 
        return 'https://codeforces.com/contest/' + str(result['contestId']) + '/submission/' + str(result['id'])
    
    def checkIfNone(self, obj, message) : 
        if obj == None : 
            print(message)
            print('You can redo the procedure until you get all the files')
            sys.exit(0)
    
    def writeToFile(self) : 
        # currently only write to cpp file
        if not os.path.exists(self.dir_name) : 
            os.makedirs(self.dir_name)

        for result in self.filtered : 
            url = self.madeLink(result)
            file_name = './' + self.dir_name + '/' + str(result['problem']['contestId']) + str(result['problem']['index']) + '.cpp'
            if os.path.exists(file_name) : 
                continue;
            response = requests.get(url)
            if response.status_code != 200 : 
                print('error')
                print('error code : ' + str(response.status_code))
                sys.exit(0)

            print('-------------------------------------------------------------------------------------')
            print(url)
            soup = BeautifulSoup(response.text, 'lxml')
            self.checkIfNone(soup,'Soup object is NoneType')
            pre_code = soup.find('pre', id='program-source-text')
            self.checkIfNone(pre_code, 'Pre_code is NoneType')
            code = pre_code.get_text()
            self.checkIfNone(code, 'Code is NoneType')
            with open(file_name, 'w') as file :
                file.write(code)
            print('url done : ' + url)
            print('-------------------------------------------------------------------------------------')