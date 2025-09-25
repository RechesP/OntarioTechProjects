#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;


/**
 * 
 * Represents an MP3 track with its details and playback functionality.
 *
 * The MP3 class encapsulates the properties and behavior of an MP3 track,
 * including its title, artist, album, year, and lyrics. It provides methods
 * to display track details, play the track, and stop the track playback.
 *
 * The class allows creating an MP3 track by specifying its details through
 * the constructor, or by using the default constructor and setting the
 * individual properties manually.
 */
class MP3 {
    public:
        /**
         * Constructs an MP3 track with the given details.
         *
         * @param newTitle The title of the MP3 track.
         * @param newArtist The artist of the MP3 track.
         * @param newAlbum The album of the MP3 track.
         * @param newYear The year of the MP3 track.
         * @param newLyrics The lyrics of the MP3 track.
         */
        string title;
        string artist;
        string album;
        int year;
        string lyrics;

        //TODO: Create a constructor that takes 5 parameters and assigns them to the 5 variables
        
        MP3(string newTitle, string newArtist, string newAlbum, int newYear, string newLyrics){
            title = newTitle;
            artist = newArtist;
            album = newAlbum;
            year = newYear;
            lyrics = newLyrics;
        }
        
        /**
         * Constructs an empty MP3 track with default values.
         *
         * The default constructor initializes the MP3 track with an empty title,
         * artist, album, and lyrics. The year is set to 0.
         */
        //TODO: Create this constructor
    
        MP3(){
            title = "";
            artist = "";
            album = "";
            year = 0;
            lyrics = "";   
        }
    
        /**
         * Displays the details of the MP3 track.
         *
         * This function prints the title, artist, album, year, and lyrics of the
         * MP3 track to the standard output.
         */
        void displayDetails();

        /**
         * Plays the MP3 track.
         *
         * This function starts playing the MP3 track by setting the isPlaying flag
         * to true and displaying the track details and lyrics. If the track is
         * already playing, it displays a message indicating that it is already
         * playing.
         */
        void play();

        /**
         * Stops the MP3 track.
         *
         * This function stops the playback of the MP3 track by setting the isPlaying
         * flag to false and displaying the stopped track details. If the track is
         * already stopped, it displays a message indicating that it is already
         * stopped.
         */
        void stop();

    private:
        /* Flag indicating if the track is currently playing or not. */
        bool isPlaying = false;

        /**
         * Prints the lyrics of the MP3 track.
         *
         * This function prints the lyrics of the MP3 track to the standard output.
         */
        void printLyrics();
};

 /**
 * Displays the details of the MP3 object aside from lyrics.
 */
void MP3::displayDetails() {
    //TODO: Complete this function
    cout << title << " - " << artist << " - " << album << " - " << year << endl;
}

  /**
 * Prints the lyrics of the MP3 song.
 */
void MP3::printLyrics() {
    //TODO: Complete this function
    cout << lyrics << endl;
}

/**
 * Plays the MP3 song by setting the isPlaying flag to true and displaying the song details and lyrics.
 * If the song is already playing, it displays a message indicating that it is already playing.
 */
void MP3::play() {
    //TODO: Complete this function
    if (isPlaying == true){
        cout << "ALREADY PLAYING" << endl;
    }
    else{
        isPlaying = true;
        displayDetails();
        printLyrics();
    }
}

/**
 * Stops the MP3 song by setting the isPlaying flag to false and displaying the stopped song details.
 * If the song is already stopped, it displays a message indicating that it is already stopped.
 */
void MP3::stop() {
    //TODO: Complete this function
    if (isPlaying == false){
        cout << "NOT PLAYING" << endl;
    }
    else{
        isPlaying = false;
        displayDetails();
    }
}




/**
 * Adds track details from a file to the music collection.
 * The user is prompted to enter the filename.
 * The function reads the title, artist, album, and lyrics from the file and creates an MP3 object with those details.
 * The MP3 object is then added to the musicCollection vector.
 *
 * @param musicCollection The vector representing the music collection.
 */
void addTrackFromFile(vector<MP3>& musicCollection,  const string& filename = "") {
    //TODO: Get the filename from the user if it isn't already a parameter
    string user_input;
    if (filename == ""){
        cout << "What is the file name" << endl;
        cin >> user_input;
        
        //filename = user_input;
    } else{
        user_input = filename;
    
    }
    //TODO: Open the file for reading. Report an error if it doesn't open
    ifstream myInput;
    string text;
    myInput.open(user_input);
    if (!myInput){
        cout << "ERROR: Unable to open " << filename << endl;
    }else{
    // TODO: Read and store title, artist, and album from the file
        getline(myInput, text);
        string title = text;
        getline(myInput, text);
        string artist = text;
        getline(myInput, text);
        string album = text;
    // TODO: Read and store year from the file
        getline(myInput, text);
        int year = stoi(text);

    // TODO: Read and store lyrics from the file
        string lyrics;
        while (getline(myInput, text)){
            lyrics.append(text+"\n");
        }
    //TODO: Create an MP3 track and give it the stored values
        MP3 track = MP3(title, artist, album, year, lyrics);
    //TODO: Put the track into the musicCollection
        musicCollection.push_back(track);
    //TODO: Close the file and report success
        myInput.close();
    }
}

/**
 * Searches the music collection for tracks by artist (partial matching).
 * Displays the search results (tracks) along with their details.
 * If no tracks are found for the given artist, it displays a message indicating that.
 *
 * @param musicCollection The vector representing the music collection.
 * @param artist The artist name to search for.
 */
void searchByArtist( vector<MP3>& musicCollection,  string& artist) {
    //TODO: Complete this function
    bool found = false;
    for(int i = 0; i < musicCollection.size(); i++){
        int indexFound = musicCollection[i].artist.find(artist);
        if (indexFound >= 0 && indexFound < musicCollection[i].artist.length()){
            found = true;
            musicCollection[i].displayDetails();
        }
    }
    if (found == false){
        cout << artist << " was not found" << endl;
    }
}

/**
 * Searches the music collection for tracks by title (partial matching).
 * Displays the search results (tracks) along with their details.
 * If no tracks are found for the given title, it displays a message indicating that.
 *
 * @param musicCollection The vector representing the music collection.
 * @param title The title to search for.
 */
void searchByTitle( vector<MP3>& musicCollection,  string& title) {
    //TODO: Complete this function
        bool found = false;
    for(int i = 0; i < musicCollection.size(); i++){
        int indexFound = musicCollection[i].title.find(title);
        if (indexFound >= 0 && indexFound < musicCollection[i].title.length()){
            found = true;
            musicCollection[i].displayDetails();
        }
    }
    if (found == false){
        cout << title << " was not found" << endl;
    }
}

/**
 * Searches the music collection for tracks by lyrics.
 * Displays the search results (tracks) along with their details.
 * If no tracks are found for the given lyrics, it displays a message indicating that.
 *
 * @param musicCollection The vector representing the music collection.
 * @param lyrics The lyrics to search for.
 */
void searchByLyrics( vector<MP3>& musicCollection,  string& lyrics) {
    //TODO: Complete this function
        bool found = false;
    for(int i = 0; i < musicCollection.size(); i++){
        int indexFound = musicCollection[i].lyrics.find(lyrics);
        if (indexFound >= 0 && indexFound < musicCollection[i].lyrics.length()){
            found = true;
            musicCollection[i].displayDetails();
        }
    }
    if (found == false){
        cout << lyrics << " was not found" << endl;
    }
}

/**
 * Displays all tracks in the music collection.
 *
 * @param musicCollection The vector representing the music collection.
 */
void displayTracks(vector<MP3>& musicCollection) {
    //TODO: Complete this function
    for(int i = 0; i < musicCollection.size(); i++){
        musicCollection[i].displayDetails();
    }
}

/**
 * Prompts the user with a menu of options and performs the corresponding actions based on user input.
 * Manages the interaction with the music collection and performs various operations such as adding tracks,
 * searching tracks, playing songs, stopping songs, and displaying track details.
 *
 * @param musicCollection The vector representing the music collection.
 */
vector<MP3> createPlaylist(vector<MP3>& musicCollection){
    displayTracks(musicCollection);
    int var;
    vector<MP3> play_list;
    cout << "Choose a song or 999 to stop" << endl;
    cin >> var;
    while (var != 999){
        play_list.push_back(musicCollection[var]);
        cout << "Choose a song or 999 to stop" << endl;
        cin >> var;
    }
    return play_list;
}
    
void startPlaylist(vector<MP3> playlist){
    for(int i = 0; i < playlist.size(); i++){
        playlist[i].play();
        playlist[i].stop();
        cout << endl;
    }
}
    
    
void displayMenu(vector<MP3>& musicCollection) {
    int choice;
    vector<MP3> play_list;
    do {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Add track details from a file" << endl;
        cout << "2. Search tracks by artist" << endl;
        cout << "3. Search tracks by title" << endl;
        cout << "4. Search tracks by lyrics" << endl;
        cout << "5. Display all tracks" << endl;
        cout << "6. Play a song" << endl;
        cout << "7. Stop a song" << endl;
        cout << "8. Create new play list" << endl;
        cout << "9. Play play list" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTrackFromFile(musicCollection);
                break;
            case 2:
                {
                    string artist;
                    cout << "Enter the artist: ";
                    cin.ignore();
                    getline(cin, artist);
                    searchByArtist(musicCollection, artist);
                }
                break;
            case 3:
                {
                    string title;
                    cout << "Enter the title: ";
                    cin.ignore();
                    getline(cin, title);
                    searchByTitle(musicCollection, title);
                }
                break;
            case 4:
                {
                    string lyrics;
                    cout << "Enter the lyrics: ";
                    cin.ignore();
                    getline(cin, lyrics);
                    searchByLyrics(musicCollection, lyrics);
                }
                break;
            case 5:
                displayTracks(musicCollection);
                break;
            case 6:
                {
                    cout << "List of tracks by index:" << endl;
                    //TODO: Display each track by index
                    for(int i = 0; i < musicCollection.size(); i++){
                        cout << i+1 << ". "; 
                        musicCollection[i].displayDetails();
                    }

                    int trackIndex;
                    cout << "Enter the index of the song to play: ";
                    cin >> trackIndex;
                    //TODO: If the index is valid, play that track.
                    if (trackIndex > 0 && trackIndex <= musicCollection.size()){
                        musicCollection[trackIndex].play();
                    }

                }
                break;
            case 7:
                {
                    cout << "List of tracks by index:" << endl;
                    //TODO: Display each track by index
                    for(int i = 0; i < musicCollection.size(); i++){
                        cout << i+1 << ". "; 
                        musicCollection[i].displayDetails();
                    }

                    int trackIndex;
                    cout << "Enter the index of the song to stop: ";
                    cin >> trackIndex;
                    //TODO: If the index is valid, stop that track.
                    if (trackIndex > 0 && trackIndex <= musicCollection.size()){
                        musicCollection[trackIndex].stop();
                    }
                }
                break;
            case 8:
                play_list = createPlaylist(musicCollection);
                cout << "playlist made" << endl;
                break;
                
            case 9:
                cout << "playing playlist" << endl;
                startPlaylist(play_list);
                break;
                
            case 10:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 10);
}

int main() {
    //TODO: Create a vector of MP3s called musicCollection
    vector<MP3> musicCollection;

    // Open files mp3_1.txt to mp3_9.txt
    for (int i = 1; i <= 9; ++i) {
        string filename = "mp3_" + to_string(i) + ".txt";
        addTrackFromFile(musicCollection, filename);
    }

    displayMenu(musicCollection);

    return 0;
}