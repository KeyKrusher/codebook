// Code written by Jack Clark
// Copyright 2017(c) the M.I.T. License
// Header file for sorting the tags in the given files

// Getting the amount of characters of a file
int getLengthOfFile(ifstream& file) {
    file.seekg(0,std::ios_base::end);
    std::ios_base::streampos end_pos = inMyStream.tellg();
    // Get the end of the function
    return end_pos;
}
// Assumed that the files test.tsv and train.tsv will be passed from Tag.cpp
int tagCounter(string tagName, ifstream& testFile, ifstream& trainFile) {
    testFile.open();
    trainFile.open();
    int lengthOfTestFile = getLengthOfFile(testFile);
    // Loop for the test file
    for (int counter = 0; counter <= lengthOfTestFile; counter++) {
        int countOfTag = 0;
        
        return countOfTag;
    }
    
    // Loop for the train file
    for (int counter = 0; counter <= lengthOfTrainFile; counter++) {
        int countOfTag = 0;
        
        return countOfTag;
    }
}