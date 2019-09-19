int main () {
  stringstream ss (stringstream::in | stringstream::out);
  string word;
  string str;
  getline(cin,str);
  ss<<str;
  while(ss>>word)
    {
      //if(    )
        cout<<word<<endl;
    }
}
