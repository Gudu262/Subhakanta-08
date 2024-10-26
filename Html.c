<!DOCTYPE html>
<html>
    <head>
        <title>YouTube Clone</title>

        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Roboto:ital,wght@0,100;0,300;0,400;0,500;0,700;0,900;1,100;1,300;1,400;1,500;1,700;1,900&display=swap" rel="stylesheet">

        <link rel="stylesheet" href="Styles/video.css">
        <link rel="stylesheet" href="Styles/header.css">
        <link rel="stylesheet" href="Styles/common.css">
        <link rel="stylesheet" href="Styles/sidebar.css">

    </head>
    <body>
        <header class="header">
            <div class="Left_Section">
                <img class="menu" src="Icons/hamburger-menu.svg">
                <img class="logo" src="Icons/youtube-logo.svg">
            </div>
            <div class="Middle_Section">
                <input class="search" type="text" placeholder="Search">
                <button class="search-button"> <img class="search-icon" src="Icons/search.svg"> <div class="tooltip"> Search </div> </button>
                <button class="voice-search"> <img  class="voice" src="Icons/voice-search-icon.svg"><div class="tooltip"> Voice Search </div></button>
            </div>
            <div class="Right_Section">
                <div class="upload-container">
                    <img class="upload" src="Icons/upload.svg">
                    <div class="tooltip"> Create </div>
                </div>
                <div class="apps-container">
                    <img class="apps" src="Icons/youtube-apps.svg">
                    <div class="tooltip"> YouTube Apps </div>
                </div>
                <div class="notifications-icon-count">
                    <img class="notifications" src="Icons/notifications.svg">
                    <div class="notifications-count">3</div>
                    <div class="tooltip"> Notifications </div>
                </div>
                <img class="profile-pic" src="Profile Pictures/prf5.jpg">
            </div>
        </header>

        <nav class="sidebar">
            <div class="sidebar-box">
                <img src="Icons/home.svg">
                <div>Home</div>
            </div>
            <div class="sidebar-box">
                <img src="Icons/explore.svg">
                <div>Explore</div>
            </div>
            <div class="sidebar-box">
                <img src="Icons/subscriptions.svg">
                <div>Subscriptions</div>
            </div>
            <div class="sidebar-box">
                <img src="Icons/originals.svg">
                <div>Originals</div>
            </div>
            <div class="sidebar-box">
                <img src="Icons/youtube-music.svg">
                <div>YouTube Music</div>
            </div>
            <div class="sidebar-box">
                <img src="Icons/library.svg">
                <div>Library</div>
            </div>
        </nav>

        <main>
            <section class="video-grid">
                <div class="video-preview">
                
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=G3e-cpL7ofc&t=20025s"><img class="img1" src="Images/hq720.webp"></a>
                        <div class="video-time">6:31:24</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@SuperSimpleDev"><img class="prf1" src="Profile Pictures/prf1.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=G3e-cpL7ofc&t=20025s">HTML & CSS Full Course - Beginner to Pro</a>
                            </p>
                            <p class="video-author">
                                SuperSimpleDev
                            </p>
                            <p class="video-stats">
                                12M Views · 2 years ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=Uvywmr6JfZg"><img class="img1" src="Images/hq720 (1).webp"></a>
                        <div class="video-time">15:04</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@SharkTankIndia"><img class="prf1" src="Profile Pictures/prf3.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=Uvywmr6JfZg">Digital Paani कैसे करेगा waste water treatment plants की health & performance को track?</a>
                            </p>
                            <p class="video-author">
                                Shark Tank India
                            </p>
                            <p class="video-stats">
                                210K Views · 15 days ago
                            </p>
                        </div>
                    </div>
                </div>
        
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=m9s1NQG3TNY&t=505s"><img class="img1" src="Images/hq720 2.webp"></a>
                        <div class="video-time">22:01</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@CarryMinati"><img class="prf1" src="Profile Pictures/prf4.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=m9s1NQG3TNY&t=505s">MR BEAST PARODY 🤑 Ft. INDIAN CREATORS | CARRYMINATI</a>
                            </p>
                            <p class="video-author">
                                CarryMinati
                            </p>
                            <p class="video-stats">
                                3M Views · 1 day ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=WQdqgrWvy6g&t=1s&pp=ygUbYXNpYSBjdXAgc3VwZXIgNCBpbmQgdnMgcGFr"><img class="img1" src="Images/hq720 3.webp"></a>
                        <div class="video-time">11:47</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@AsianCricketCouncilTV"><img class="prf1" src="Profile Pictures/prf 5.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=WQdqgrWvy6g&t=1s&pp=ygUbYXNpYSBjdXAgc3VwZXIgNCBpbmQgdnMgcGFr">Super11 Asia Cup 2023 | Super 4 | Pakistan vs India | Full Match Highlights?</a>
                            </p>
                            <p class="video-author">
                                Asian Cricket Council
                            </p>
                            <p class="video-stats">
                                70M Views · 1 year ago
                            </p>
                        </div>
                    </div>
                </div>
        
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=yDbg3SGQ2DQ&pp=ygURaW5kaWFuIGdvdCBsYXRlbnQ%3D"><img class="img1" src="Images/hq720 4.webp"></a>
                        <div class="video-time">54:32</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@SamayRainaOfficial"><img class="prf1" src="Profile Pictures/prf2.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=yDbg3SGQ2DQ&pp=ygURaW5kaWFuIGdvdCBsYXRlbnQ%3D">INDIA'S GOT LATENT | EP 08 ft. ‪@poonampandeyonline‬ ‪@viditchess‬ ‪@vivekmagic‬ ​⁠</a>
                            </p>
                            <p class="video-author">
                                Samay Raina
                            </p>
                            <p class="video-stats">
                                15M Views · 10 days ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=3yiWqnKl7lQ&pp=ygUPd2MgMjAyNCBtb250YWdl"><img class="img1" src="Images/hq720 5.webp"></a>
                        <div class="video-time">4:48</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@ICC"><img class="prf1" src="Profile Pictures/prf 6.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=3yiWqnKl7lQ&pp=ygUPd2MgMjAyNCBtb250YWdl">The Epic Montage | T20 World Cup 2024 Final</a>
                            </p>
                            <p class="video-author">
                                ICC
                            </p>
                            <p class="video-stats">
                                5.2M Views · 3 Months ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=M3ygFVrfR6E"><img class="img1" src="Images/hq720 8.webp"></a>
                        <div class="video-time">8:33</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@officialenglandcricket"><img class="prf1" src="Profile Pictures/prf7.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=M3ygFVrfR6E">Bumrah With The Bat! | 35 Runs In One Over Against Stuart Broad! | England v India 2022</a>
                            </p>
                            <p class="video-author">
                                England & Wales Cricket Board
                            </p>
                            <p class="video-stats">
                                47M Views · 2 Years ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=4iiLuQVMs-w"><img class="img1" src="Images/hq720 9.webp"></a>
                        <div class="video-time">9:56</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@ICC"><img class="prf1" src="Profile Pictures/prf8.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=4iiLuQVMs-w">Unbelievable athleticism | The Best Catches of T20WC 2024
                                </a>
                            </p>
                            <p class="video-author">
                                ICC
                            </p>
                            <p class="video-stats">
                               3.9 M Views · 4 Months ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=4oSPHA3tu54"><img class="img1" src="Images/hq720 10.webp"></a>
                        <div class="video-time"></div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@sobbiebawa"><img class="prf1" src="Profile Pictures/prf9.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=4oSPHA3tu54">Virat Kholi interview at Wankhede stadium! Crowd Chanting Kohli! 40,000 people</a>
                            </p>
                            <p class="video-author">
                                Saurav Puri
                            </p>
                            <p class="video-stats">
                               1 M Views · 3 Months ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=MT0hGJL6m7k&pp=ygUDdXJp"><img class="img1" src="Images/hq720 11.webp"></a>
                        <div class="video-time">02:12:36</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@ZEE5"><img class="prf1" src="Profile Pictures/prf10.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=MT0hGJL6m7k&pp=ygUDdXJp">URI: The Surgical Strike | Full Movie HD | Vicky Kaushal, Yami Gautam |Latest Bollywood Action Movie</a>
                            </p>
                            <p class="video-author">
                               ZEE5
                            </p>
                            <p class="video-stats">
                               10 M Views · 2 Months ago
                            </p>
                        </div>
                    </div>
                </div>
                
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=4AjTTb8-hY8"><img class="img1" src="Images/hq720 12.webp"></a>
                        <div class="video-time">01:50:05</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@rajshamani"><img class="prf1" src="Profile Pictures/prf11.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=4AjTTb8-hY8">Hijacks, Para SF Training, NSGs & Safety of India Exposed - Col Kaushal Kashyap |FO232 Raj Shamani</a>
                            </p>
                            <p class="video-author">
                               Raj Shamani
                            </p>
                            <p class="video-stats">
                               5 M Views · 2 Months ago
                            </p>
                        </div>
                    </div>
                </div>
    
                <div class="video-preview">
                    
                    <div class="img-row">
                        <a href="https://www.youtube.com/watch?v=bn0Kh9c4Zv4"><img class="img1" src="Images/hq720 13.webp"></a>
                        <div class="video-time">20:35</div>
                    </div>
                    <div class="video-ingrid">
                        <div class="channel-pic">   
                            <a href="https://www.youtube.com/@MrBeast"><img class="prf1" src="Profile Pictures/prf12.jpg"></a>
                        </div>
                        <div class="video-info">
                            <p class="video-title">
                                <a class="video-link" href="https://www.youtube.com/watch?v=bn0Kh9c4Zv4">7 Days Exploring An Underground City
                                </a>
                            </p>
                            <p class="video-author">
                               MrBeast
                            </p>
                            <p class="video-stats">
                               75 M Views · 11 Days ago
                            </p>
                        </div>
                    </div>
                </div>
            </section>
        </main>
    </body>
</html>
