import React from "react";
import UserList from "./UserList";
import PostList from "./PostList";
import "./App.css";

const App = () => {
  return (
    <div className="app">
      <h1>API Data Fetching with Custom Hook</h1>
      <UserList />
      <PostList />
    </div>
  );
};

export default App;
