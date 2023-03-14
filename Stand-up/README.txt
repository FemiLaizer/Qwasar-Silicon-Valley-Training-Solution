# Welcome to My First Backend
For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. 
Folder names are provided at the beginning of each exercise under submit directory and 
specific file names for each exercise are also provided at the beginning of each exercise under submit files

## Task
Create a backend app with light web framework javascript you will use express, ruby you will use sinatra, python you will use flask
You don't need to create a database, just store the information hard coded inside your file.
In order to find all the information needed, you will have to search online. Wikipedia, Google and Fan's website will have all the information you need for this project! :)
Continue to build your backend app.js.
This time we will add multiple pages or routes:

GET on /. This action will give randomly in a pool of at least 20 a name of a song from Frank Sinatra.
Wikipedia Page
GET on /birth_date. This action will give Frank Sinatra birth date.
GET on /birth_city. This action will give Frank Sinatra birth city.
GET on /wives. This action will give all the name of Frank Sinatra wife.
Format:
wife1, wife2, wife3, wife4
GET on /picture. This action will redirect to Frank Sinatra's picture.
"https://en.wikipedia.org/wiki/Frank_Sinatra#/media/File:Frank_Sinatra2,_Pal_Joey.jpg"

Continue to build your backend app.js, in this last part we will add two more routes:
GET on /public. This action will print "Everybody can see this page"
GET on /protected. This action will be protected by a HTTP Basic access authentication and print "Welcome, authenticated client" 
if you are authorized with the login admin and password admin otherwise it will provide a 401 Not authorized

## Description
I installed express so as to get node_modules, package-lock.json, package.json
I created gitignore annd put the /node_modules inside it so as not to push heavy file to my git

I imported express and store it in a varaible called express, then invoke the express function and stored in app varaible
I initiated the app.get function for each of the "task-path". Example: app.get for "./" and so on.
I created a file called songs.js to store my needed for and exported them to app.js for Usage.
I then pass the request and response into the app.get method and the was used res.send to return values from
the imported varaibles. 

The protected path was also done using the get user authentication. I checked if the value is valid
hence return "Not authenticated" and status 401
However, if the value statisfied the condition, the client gets a Welcome message with authentication successful
and the status is 200

These values was then display or send to the client by using the port 8080 to listen to the client request.


## Installation
Click on doCode, open the terminal and start running commands
install express and necessary dependensies where needed using "npm install documentation"
create a file and name the file index.html  using the command touch app.js
create a file and name the file style.css  using the command touch songs.js to store necessary data
Remember to git add && git commit && git push each exercise!
you may execute your function with tests, 

## Usage
Open a new terminal, you can cd to the directory you are working on.
You can use console.log if it a Javascript project to run your code in the backend but you must 
run node and the filename to see the result in the terminal.
run gandalf to pass the code but comment your test cases or remove the test cases if not, gandalf will return error

### The Core Team
This project is not a group project. It is an individual project so I did it alone. 
However, I asked questions from google and team mates where I needed clarity.
Now the "my first backend" project in node and express has been completed. Thank you



<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
