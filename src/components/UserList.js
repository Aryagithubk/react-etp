import React from "react";
import useFetch from "./useFetch";
import "../App.css";

const UserList = () => {
  const { data, loading, error } = useFetch(
    "https://jsonplaceholder.typicode.com/users"
  );

  if (loading) return <div className="loading">Loading...</div>;
  if (error) return <div className="error">Error: {error}</div>;

  return (
    <div className="user-list">
      <h2>User List</h2>
      <ul>
        {data.map((user) => (
          <li key={user.id} className="user-item">
            <h3>{user.name}</h3>
            <p>{user.email}</p>
          </li>
        ))}
      </ul>
    </div>
  );
};

export default UserList;
