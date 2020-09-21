//assuming struct has been created, struct called Parks
Parks *head;
head = NULL;
ifstream inFile;
int count; 
count = 0; 

// read in from input file 
ifstream inFile;
inFile.open("file_name");

Parks *initialptr;
initialptr = new Parks;
while (inFile && initialptr != NULL)
{
	getline(inFile, initialptr->name);
	getline(inFile,initialptr->state);
	inFile >> initialptr->visitors;
	inFile >> initialptr->acres;
	inFile.ignore(100,’\n’);
	count ++;
	
	initialptr->next = head; 
	head = initialptr; 
	initialptr = NULL; 
	initialptr = new Parks;
}
delete initialptr;
initialptr = NULL;
inFile.close();

