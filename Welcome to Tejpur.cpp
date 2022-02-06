#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>
#include <stdlib.h>
#define UNDERLINE "\033[4m";
#define CLOSEUNDERLINE "\033[0m";
#define CLRSCR "\e[2J\e[H";
#define RED "\x1b[31m";
#define GREEN "\x1b[32m";
#define BLUE "\x1b[34m";
#define MAGENTA "\x1b[35m";
#define WHITE "\x1b[37m";
using namespace std;

string Userinput;
char Userinputchar;
int ph;

void Level2();
class Base
{public:
 int health;
 int pmeldamage;
 int prngdamage;
 int pdef;
 int mmeldamage;
 int mrngdmage;
 int mdef;
};
class Monster: public Base
{public:
 int monsterdamage;
 int mmeldamage = 15;
 int mrngdamage = 05;
 int mdef = 20;
 public:
 int monsterhealth()
 {
   return health;
 }
 int monstermeldamage(){
  return mmeldamage;
 }
 int monsterrngdamage(){
  return mrngdamage;
 }
 int monsterdef(){
  return mdef;
 }
 };

class Player: public Base
{public:
 int playerdamage;
 int pmeldamage = 25;
 int prngdamage = 15;
 int pdef = 40;
 Monster m1;
 int playerhealth()
 {

  return health;
 }
 int playermeldamage()
 {
 return pmeldamage;
 }
 int playerrngdamage()
 {
 return prngdamage;
 }
 int playerdef(){
  return pdef;
 }
 void Intro()
 {
  cout<<RED;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<"*********************                  RPG BATTLE ADVENTURE GAME          *******************************************"<<endl<<endl;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<"***********************************************************************************************************************************"<<endl;
  cout<<MAGENTA;
  cout<<"                                      ONCE UPON A TIME IN  TEJPUR"<<endl<<endl;
  cout<<"90 ka dashk chal rha tha and Emergency khatam ho chuki thi. Player apni family ke saath hasi khushi rehta tha"<<endl<<"Player tejpur thana me Senior Inspector ka kaam karta tha "<<endl<<"Corruption and kala bazaari ke chakkr me Tejpur ka local don a.k.a BOSS -- (SADHU YADAV) ne sabko pareshaan kr rkha tha"<<endl<<"Murder, Chori, Apharan sab kuch Sadhu Yadav ki dekh rekh me hota tha and Police apne rifles and low authority se kuch nai kar paa rhi thi"<<endl<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
  cout<<"Ek din SADHU ka govt ka bahot bada tender milne vaala tha jis me vo public ka saara paisa khaa jataa"<<endl<<"Player ne apni jaan pr khelkr 1 sting operation kia and govt authorities ke saamne sab sach rakh dia"<<endl<<"SADHU TENDER HAAR GAYA aur vo iska bhaar nai jhel paaya"<<endl<<"Usio Andheri Raat me SADHU ne player ke poore parivaar ko usi ke saamne maar dia and Player ko akela chord dia"<<endl<<endl;
  cout<<BLUE;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"CURRENT SCENARIO"<<endl<<"SADHU ne sheher ke kone me apna ek FORTRESS banaya h and ab vo vahi se kaam krta h"<<endl<<"Player ka ek hi maqsad h ab _________BADLAA_________"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;    
  cout<<WHITE;
  cout<<"Badla poora lene ke lie 2 padaav paar karne honge "<<endl<<"AB AAGE"<<endl;
  cout<<"press 1 to ENTER VILLAGE "<<endl<<endl;
  cin>>Userinput;
    if(Userinput == "1")
    {
      cout<<CLRSCR;
      Start();
    }
    else
    {
      cout<<"INVALID INPUT"<<endl;
      cout<<"RELOADING GAME.....WAIT"<<endl;
      sleep(2);
      cout<<CLRSCR;
      Intro();
    }
}
  void gameWon()
  {
    cout<<RED;
    cout<<"**************************************************************************************"<<endl;
    cout<<"**************************************************************************************"<<endl;
    cout<<"**************************************************************************************"<<endl<<endl;
    cout<<"*********************                  Player ka BADLA Poora HUAA..!!!!!! ************"<<endl<<endl;
    cout<<"**************************************************************************************"<<endl;
    cout<<"**************************************************************************************"<<endl; 
    cout<<WHITE;
    cout<<"**************************************************************************************"<<endl<<endl;   
    cout<<"TEJPUR me yadav ka toh prakop naui raha and sab log imaaandaari and sukhmay jeevan jeen  lage"<<endl<<"Player bhi kahin door Himalaya apne paap ka pashchayataap and apne aap ko Bhagvaan ko smarpit karne nikal pada.."<<endl<<"                                                                                THE END                            "<<endl<<endl;
    cout<<WHITE;
    cout<<"press 1 to RESTART "<<endl<<endl;
    cin>>Userinput;
      if(Userinput == "1")
      {
        cout<<CLRSCR;
        Intro();
      }
      else
      {
        cout<<"INVALID INPUT"<<endl;
        cout<<"RELOADING GAME.....WAIT"<<endl;
        sleep(2);
        cout<<CLRSCR;
        gameWon();
      }
  }
  void Level3()
  {
    cout<<CLRSCR;
    cout<<MAGENTA;
    cout<<"*********************************************************************************************************************"<<endl;
    cout<<GREEN;
    cout<<CLRSCR;
    cout<<"**************************Welcome to Mission3:  BREAKING THE ORDER*******************************"<<endl<<endl;    
    cout<<WHITE;    
    cout<<"Player apna ULTIMATE WEAPON lekr finally Sadhu Yadav ke Garh par pahuchh gaya....."<<endl<<"  Lets Check Player's updated Stats below:"<<endl;
    ph = (rand()%200)+ph;
    cout<<MAGENTA;
    cout<<"Player Increased health is: "<<ph<<endl<<endl;
    cout<<WHITE;
    cout<<"You have finally arrived at  --- SUNDAR CONSTRUCTIONS"<<endl<<"You will have to defeat the BROTHERS"<<endl<<"1. Sundar Pandya ak.ka. Monster1 has health b/w (100-120)"<<endl<<"and"<<endl;
    cout<<"2. Fracture Pandya a.k.a Monster2 has health b/w(50-100) depending on Player previous performance in Level1"<<endl<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;      Player p;
    Monster m3;
    int mh = 500;
    cout<<RED;
    cout<<"SADHU YADAV TAIYAAR H PLAYER KO USKE PARIVAR KE PAAS UPAR PAHUCHAAN KE LIE.          ||Monster health: "<<mh<<endl<<endl;    
    cout<<WHITE;
    cout<<"Get Ready FOR YOUR FINAL BATTLE"<<endl<<endl;
    int choice;
    while (mh > 0 || ph>0)
    {
     cout<<"Badla lene ke 2 tareeke h Player ke paas aur Bachne ka 1 tareeka h aapke paas"<<endl<<"1. Player karega GLOCK se goliyon ki bauchaar (40-50)  "<<endl<<"2. Player USEd ULtimate Weapon (60-70) "<<endl<<"3. Player ne Use kia Sadhu ki BETI ko as cover to heal"<<endl;
     do{
      cin>>choice;
      if(choice > 3 || choice < 1){
        cout<<"Entered value is invalid"<<endl<<"PLEASE ENTER A VALID INPUT"<<endl;
        sleep(2);
        cout<<CLRSCR;
        Level3();        
      }
      }
       while (choice>3 || choice <1);
       switch (choice)
       {
        case 1:
        p.pmeldamage = 0;
        p.prngdamage = (rand()%11)+40;
        p.pdef = 0;
        break;
        case 2:
        p.pmeldamage = (rand()%11)+60;
        p.prngdamage = 0;
        p.pdef = 0;
        break;
        case 3:
        p.pmeldamage = 0;
        p.prngdamage = 0;
        p.pdef = (rand()%101)+50;
        break;
      }
      choice = (rand()%3)+1;
      switch(choice)
      {
        case 1:
        m3.mmeldamage = 0;
        m3.mrngdamage = (rand()%6)+35;
        m3.mdef = 0;
        break;
        case 2:
        m3.mmeldamage = (rand()%31)+20;
        m3.mrngdamage = 0;
        m3.mdef = +0;
        break;
        case 3:
        m3.mmeldamage = 0;
        m3.mrngdamage = 0;
        m3.mdef = (rand()%51)+50;
        break;
      }
      m3.monsterdamage = (p.pmeldamage+p.prngdamage);
      if(m3.monsterdamage<0)
      {
        m3.monsterdamage = 0;
      }
      mh = (mh + m3.mdef) - m3.monsterdamage;
      cout<<"player ne badla lia  "<<m3.monsterdamage<<"  (If 0 then Player HEALED)"<<" damage karke monster ko"<<endl<<endl;
      cout<<"______________________________________________________________________________________________"<<endl;
      cin.get();
      if (mh < 1){
        cout<<CLRSCR;
        cout<<"Player ne SADHU YADAV ki Kabr khod di and Monster is DEAD!!"<<endl<<endl;
        cout<<"_________________________________________________________________________________________"<<endl<<endl<<endl;
        cout<<CLRSCR;
        cout<<MAGENTA;
        cout<<"                       YO";
        cout<<BLUE;
        cout<<"U W";
        cout<<RED;
        cout<<"I";
        cout<<GREEN
        cout<<"N"<<endl<<endl;
        sleep(3);
        gameWon();
      }
      cout<<"Sahu Yadav Kamzor Ho gaya "<<endl;
      cout<<RED;
      cout<<"                                                     ||Monster Health: "<<mh<<endl<<endl;
      cout<<WHITE;
      p.playerdamage = (m3.mmeldamage+m3.mrngdamage);
      if(p.playerdamage<0)
      {
        p.playerdamage = 0;
      }
      ph = (ph+p.pdef) -p.playerdamage;
      cout<<"Sahdu Yadav ne apne taqat se kia ghatak attack "<<p.playerdamage<<"    (If 0 then monster healed)"<<"    Health Churaa Li"<<endl;
      cout<<MAGENTA;
      cout<<"                                                   ||Player Health:"<<ph<<endl<<endl;
      cout<<WHITE;
      if(ph<1)
      {
        cout<<"BOSS KE ILAAQE ME FASS GAYE....... YOU DIED"<<endl<<endl;
        cout<<"GAME OVER"<<endl<<endl;                
        cin.get();
        sleep(2);
        Level3();
        
      }
  }        
  }
  void Level2()
  {
    Player p;
    Monster m1,m2;
    cout<<GREEN;
    cout<<CLRSCR;
    cout<<"**************************Welcome to Mission2:  FIERY AMBUSH*******************************"<<endl<<endl;    
    cout<<WHITE;
    cout<<"As our Player reaches close to confront Sadhu Yadav.....  Lets Check Stats below:"<<endl;
    cout<<MAGENTA;
    cout<<"Player Remaining Health in Level 2 is: "<<ph<<endl<<endl;
    cout<<WHITE;
    cout<<"You have finally arrived at  --- SUNDAR CONSTRUCTIONS"<<endl<<"You will have to defeat the BROTHERS"<<endl<<"1. Sundar Pandya ak.ka. Monster1 has health b/w (100-120)"<<endl<<"and"<<endl;
    cout<<"2. Fracture Pandya a.k.a Monster2 has health b/w(50-100) depending on Player previous performance in Level1"<<endl<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;    
    ph = (rand()%200)+ph;
    cout<<MAGENTA;
    cout<<"Your Updated Health in Level 2 is: "<<ph<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<GREEN;
    cout<<"Additional Info:"<<endl;
    cout<<WHITE;    
    cout<<"1. You will be able to do the same damage tpo both the brothers"<<endl;
    cout<<"2. If any 1 of the brother dies first, The standing brother WILL NOT BE ABLE To use the Healing Ability"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl<<endl;    
    int choice;
    srand(time(NULL));
    int mh = (rand()%20)+100;
    int mh2 = (rand()%50)+50;  
    cout<<"Monster1 Health in Level 2 is: "<<mh<<"                          ||      "<<"Monster2 Health in Level 2 is: "<<mh2<<endl<<endl;      
    cout<<WHITE;
    cout<<"Get Ready for the DUAL monster attack"<<endl<<endl;    
  while (mh > 0 || ph>0 || mh2 > 0)
  {
     cout<<"Badla lene ke 2 tareeke h Player ke paas aur Bachne ka 1 tareeka h aapke paas"<<endl<<"1. Double Damage (20-25)  "<<endl<<"2. Double Bullets (30-35)"<<endl<<"3. Its better to stay back and DEFENCE"<<endl;
    do{
      cin>>choice;
      if(choice > 3 || choice < 1){
        cout<<"Entered value is invalid"<<endl<<"PLEASE ENTER A VALID INPUT"<<endl;
      }
      }
      while (choice>3 || choice <1);
      switch (choice)
      {
        case 1:
        p.pmeldamage = 0;
        p.prngdamage = (rand()%6)+20;
        p.pdef = 0;
        break;
        case 2:
        p.pmeldamage = (rand()%6)+30;
        p.prngdamage = 0;
        p.pdef = 0;
        break;
        case 3:
        p.pmeldamage = 0;
        p.prngdamage = 0;
        p.pdef = (rand()%100)+20;
        break;
      }
       if (mh>0){
          choice = (rand()%3)+1;
          switch(choice)
          {
            case 1:
            m1.mmeldamage = 0;
            m1.mrngdamage = (rand()%11)+5;
            m1.mdef = 0;
            break;
            case 2:
            m1.mmeldamage = (rand()%11)+15;
            m1.mrngdamage = 0;
            m1.mdef = 0;
            break;
            case 3:
            m1.mmeldamage = 0;
            m1.mrngdamage = 0;
            m1.mdef = (rand()%81)+10;
            break;
          }
       m1.monsterdamage = ((p.pmeldamage+p.prngdamage));            
       }
       if(mh2>0){
       choice = (rand()%3)+1;
      switch(choice)
      {
        case 1:
        m2.mmeldamage = 0;
        m2.mrngdamage = (rand()%6)+20;
        m2.mdef = 0;
        break;
        case 2:
        m2.mmeldamage = (rand()%6)+35;
        m2.mrngdamage = 0;
        m2.mdef = 0;
        break;
        case 3:
        m2.mmeldamage = 0;
        m2.mrngdamage = 0;
        m2.mdef = (rand()%6)+10;
        break;
      }
       m2.monsterdamage = ((p.pmeldamage+p.prngdamage));                 
       }
      if(m1.monsterdamage<0)
      {
        m1.monsterdamage = 0;
      }
      if(m2.monsterdamage<0)
      {
        m2.monsterdamage = 0;
      }
      mh = (mh+m1.mdef) - m1.monsterdamage;
      mh2 =(mh2+m2.mdef) - m2.monsterdamage;
      int m1m2health = mh + mh2;
      cout<<"player ne badla dia  "<<m1.monsterdamage<<" damage karke monster 1 ko"<<endl;
      cout<<"                                 AND"<<endl;
      cout<<"player ne badla dia  "<<m2.monsterdamage<<" damage karke monster 2 ko"<<endl;
      cout<<"______________________________________________________________________________________________"<<endl;
      cin.get();
      if(mh <0)
      {
        mh = 0;
        m1.monsterdamage=0;
        cout<<RED;
        cout<<"Monster 1 is DEAD"<<endl<<endl;
        cout<<WHITE;
      }
      if(mh2 <0)
      {
        mh2 = 0;
        m2.monsterdamage=0;
        cout<<RED;
        cout<<"Monster 2 is DEAD"<<endl<<endl;
        cout<<WHITE;
      }
      if (m1m2health < 1){
        cout<<CLRSCR;
        cout<<"Player Defeated the monsters with a combo Moster Kill Move!!"<<endl<<endl;
        cout<<"_________________________________________________________________________________________"<<endl<<endl;
        sleep(2);
        cout<<BLUE;
        cout<<"                                   PLAYER RECIEVED ((GLOCK 43)) ..!!!!!!!!!!!!!!!!!!!!"<<endl<<endl<<endl;
        cout<<"_________________________________________________________________________________________"<<endl<<endl;
        cout<<"                                   ********************************                      "<<endl;
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *      Loading BOSS Level(3)   *                       "<<endl;
        cout<<"                                   *            a.k.a             *                       "<<endl;        
        cout<<"                                   *         SADHU YADAV          *                       "<<endl;          
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *                              *                      "<<endl; 
        cout<<"                                   ********************************                      "<<endl; 
        sleep(3);        
        Level3();
      }
      cout<<"After Player's wrath.!!!!  Monster 1 health reduced to  ";
      cout<<RED;
      cout<<"                ||Monster1 health: "<<mh<<endl;
      cout<<WHITE
      cout<<"After Player's wrath.!!!!  Monster 2 health reduced to  ";
      cout<<RED;
      cout<<"                ||Monster1 health: "<<mh2<<endl;
      cout<<WHITE;
      cout<<"-------------------------------------------------------------------------------------------"<<endl;
        if (mh>0 && mh2>0)
        {
           p.playerdamage = (m1.mmeldamage+m1.mrngdamage) + (m2.mmeldamage+m2.mrngdamage);
        }
          else if(mh>0 && mh2==0)
          {
           p.playerdamage = (m1.mmeldamage+m1.mrngdamage);            
          }
            else if (mh==0 && mh2>0)
            {
               p.playerdamage = (m2.mmeldamage+m2.mrngdamage);                          
            }
      if(p.playerdamage<0)
      {
        p.playerdamage = 0;
      }
      ph = (ph+p.pdef) -p.playerdamage;
      cout<<"Monster ne apna gang bulaakr player ki "<<p.playerdamage<<" Health Churaa Li"<<endl<<endl<<"Player is now at ";
      cout<<GREEN;
      cout<<"                                                       ||Player health: "<<ph<<endl<<endl;
      cout<<WHITE;      
      if(ph<1)
      {
        cout<<"Ye Sheher Monster ka h....... YOU DIED"<<endl<<endl;
        cout<<"GAME OVER"<<endl<<endl;                
        cin.get();
      }
  }    
  }
void Level1()
  {
    ph = 300;
    int mh = 120;
    Player p;
    Monster m1;
    cout<<"**********************Mission1: A BLOODY WELCOME**************************"<<endl<<endl;
    cout<<MAGENTA;
    cout<<"Player enterS the village.                      ||Player Health: "<<ph<<endl;
    cout<<RED;
    cout<<"TATIYA BICHOO ne Player ko Pehchaan lia         ||Monster health: "<<mh<<endl<<endl;
    cout<<"AB DANGAL HOGA"<<endl;    
    cout<<WHITE;
    cout<<"HAMLA KARNE KE LIE PLAYER TAIYAAR.."<<endl<<endl;
    int choice;
    while (mh > 0 || ph>0)
    {
     cout<<"Badla lene ke 2 tareeke h Player ke paas aur Bachne ka 1 tareeka h aapke paas"<<endl<<endl<<"1. Tatiya Bichoo par door se Bow Range Attck (5-15) "<<endl<<"2. Tatiya ke ghar me ghuskr MACHETE se vaar  (15-25)"<<endl<<"3. Player ne ayurvedic kaadon se kiya khud ko HEAL"<<endl;
     do{
      cin>>choice;
      if(choice > 3 || choice < 1){
        cout<<"Entered value is invalid"<<endl<<"PLEASE ENTER A VALID INPUT"<<endl;
      }
      }
       while (choice>3 || choice <1);
       switch (choice)
       {
        case 1:
        p.pmeldamage = 0;
        p.prngdamage = (rand()%10)+15;
        p.pdef = 0;
        break;
        case 2:
        p.pmeldamage = (rand()%10)+25;
        p.prngdamage = 0;
        p.pdef = 0;
        break;
        case 3:
        p.pmeldamage = 0;
        p.prngdamage = 0;
        p.pdef = (rand()%100)+20;
        break;
      }
      choice = (rand()%3)+1;
      switch(choice)
      {
        case 1:
        m1.mmeldamage = 0;
        m1.mrngdamage = (rand()%10)+5;
        m1.mdef = 0;
        break;
        case 2:
        m1.mmeldamage = (rand()%10)+15;
        m1.mrngdamage = 0;
        m1.mdef = +0;
        break;
        case 3:
        m1.mmeldamage = 0;
        m1.mrngdamage = 0;
        m1.mdef = (rand()%50)+10;
        break;
      }
      m1.monsterdamage = (p.pmeldamage+p.prngdamage);
      if(m1.monsterdamage<0)
      {
        m1.monsterdamage = 0;
      }
      mh = (mh + m1.mdef) - m1.monsterdamage;
      cout<<"player ne badla lia  "<<m1.monsterdamage<<"  (If 0 then Player HEALED)"<<" damage karke monster ko"<<endl<<endl;
      cout<<"______________________________________________________________________________________________"<<endl;
      cin.get();
      if (mh < 1){
        cout<<CLRSCR;
        cout<<"Player ne monster ki Kabr khod di and Monster is DEAD!!"<<endl<<endl;
        cout<<"_________________________________________________________________________________________"<<endl;
        cout<<BLUE;
        cout<<"                                   PLAYER RECIEVED THE SWORD OF TATIYA BICHOO ..!!!!!!!!!!!!!!!!!!!!"<<endl<<endl<<endl;
        cout<<"                                   ********************************                      "<<endl;
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *      Loading Level 2         *                       "<<endl;
        cout<<"                                   *                              *                      "<<endl;
        cout<<"                                   *                              *                      "<<endl; 
        cout<<"                                   ********************************                      "<<endl; 
        sleep(3);
       Level2();
      }
      cout<<"Monster ki jaan kam ho gyi "<<endl;
      cout<<RED;
      cout<<"                                        ||Monster Health: "<<mh<<endl<<endl;
      cout<<WHITE;
      p.playerdamage = (m1.mmeldamage+m1.mrngdamage);
      if(p.playerdamage<0)
      {
        p.playerdamage = 0;
      }
      ph = (ph+p.pdef) -p.playerdamage;
      cout<<"Monster ne apna gang bulaakr player ki "<<p.playerdamage<<" (If 0 then monster healed)"<<" Health Churaa Li"<<endl<<endl;
      cout<<MAGENTA;
      cout<<"                                        ||Player Health:"<<ph<<endl<<endl;
      cout<<WHITE;
      if(ph<1)
      {
        cout<<"Ye Sheher Monster ka h....... YOU DIED"<<endl<<endl;
        cout<<"GAME OVER"<<endl<<endl;                
        cin.get();
      }
  }    
  }
void Start()
  {
    cout<<"               MISSIONS BRIEF              "<<endl;
    cout<<"There are total 3 levels in the game"<<endl<<endl;
    cout<<"Mission 1: BLOODY WELCOME "<<endl;
    cout<<"1. Player ko TATITYA BICHOO ko harana hoga"<<endl<<"2. TATIYA BICHOO sadhu Yadav ka right Hand h"<<endl<<"3. TATIYA BICHOO ko maarkar ek Sword Milega jo Player ko Help kregi apna BAdla Poora karne ke lie"<<endl<<endl;
    cout<<"Mission 2: A FIERY AMBUSH "<<endl;    
    cout<<"1. Player will enetr SUNDAR CONSTRUCTIONS"<<endl<<"2. Sadhu ka 90% business yahins se chalta h. Isko khatam kia to Sadhu ke connections khtm"<<endl<<"3. Player ko yahan 2 bhaiyon ka saamna karna pdega jo SADHU ke sabse Vafaadaar h"<<endl<<"Bhaiyon ko maarke Player ko GLOCK milegi jiski help ki vajh se ULTIMATE Weapon banega jis se SADHU YADAV ka khatma hoga"<<endl<<endl;
    cout<<"MISSION 3:  BREAKING THE ORDER"<<endl;
    cout<<"1. Player finally meets the BOSS to finish what was wrongfully started"<<endl<<"2. Player will use the ULTIMATE WEAPON of SWORD + GLOCK to defeat the boss"<<endl<<endl;
    cout<<GREEN;
    cout<<"                                                  ALL THE BEST"<<endl;
    cout<<WHITE;    
    cout<<"Press 1 to Start Your Journey with Level 1"<<endl<<endl;
    cin>>Userinput;
    if(Userinput == "1")
    {
      cout<<CLRSCR;
     Level1();
    }
    else
    {
      cout<<"INVALID INPUT"<<endl;
      cout<<"RELOADING GAME.....WAIT"<<endl;
      sleep(2);
      cout<<CLRSCR;
      Start();
    }
} 
 };

int main() {
  Base b;
  Player p;
  Monster m1;
  p.Intro(); 
}