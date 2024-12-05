# react-etp

write a program to create a custom hook that fetches data from an api and demostrate how it is reused in other components.
Got it now i am doing it.
Hua ? if yes then reply with yes

Summary
Custom Hook (useFetch): Reusable hook jo API se data fetch karta hai, aur loading, data, error states manage karta hai.
Components: UserList aur PostList components me hum useFetch ko use karke data fetch karte hain aur show karte hain.
App Component: App.js mein dono components ko render kiya jata hai.
CSS: Simple styling for UI.

<!-- ye read kro neeche ka -->

1. Custom Hook useFetch.js
   useFetch ek custom hook hai jo data ko fetch karne ka common logic handle karta hai. Yeh hook ek URL accept karta hai, data fetch karta hai, aur loading, error, aur data states return karta hai. useEffect mein fetch operation perform hota hai aur useState se states manage ki jati hain.

2. UserList.js & PostList.js
   UserList.js: Yeh component useFetch hook ka use karta hai aur users ka data fetch karke display karta hai. Agar loading hai toh "Loading..." dikhata hai, agar error hai toh error message, aur agar data milta hai toh user list show karta hai.
   PostList.js: Isme bhi wahi structure hai, bas posts ki list fetch karte hain.
3. App.js
   App.js mein hum UserList aur PostList components ko import karte hain aur render karte hain. Yeh overall page ka structure define karta hai.
4. CSS (App.css)
   Basic styling di gayi hai jisme loading/error messages ko red color mein, aur lists ko white background aur padding di gayi hai.
