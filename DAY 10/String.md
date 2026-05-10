

| 🛠️ FUNCTION | 🧠 SIMPLE MEANING | 💻 SHORT EXAMPLE | ✅ OUTPUT |
| :--- | :--- | :--- | :--- |
| **`length()`** | Counts the letters 📏 | `string s="Hi"; cout<<s.length();` | `2` 🔢 |
| **`size()`** | Same as length 📐 | `string s="Hi"; cout<<s.size();` | `2` 🔢 |
| **`+`** | Joins strings together 🤝 | `cout << "A" + "B";` | `AB` 🧲 |
| **`append()`** | Adds to the end 🚂 | `s="A"; s.append("B");` | `AB` 🧲 |
| **`at()`** | Gets one specific letter 🎯 | `s="Cat"; cout<<s.at(0);` | `C` 🐈 |
| **`substr()`** | Cuts out a piece ✂️ | `s="Cat"; cout<<s.substr(0,2);`| `Ca` 🔪 |
| **`find()`** | Finds the position 🔍 | `s="Cat"; cout<<s.find("t");` | `2` 📍 |
| **`erase()`** | Deletes a part 🗑️ | `s="Cat"; s.erase(0,1);` | `at` 💨 |
| **`clear()`** | Empties everything 🧽 | `s="Cat"; s.clear();` | *(empty)* 👻 |
| **`empty()`** | Checks if it's empty 📦 | `s=""; cout<<s.empty();` | `1` *(True)* ✅ |
| **`replace()`** | Swaps one part out 🔄 | `s="Cat"; s.replace(0,1,"B");`| `Bat` 🦇 |
| **`insert()`** | Puts text inside 📥 | `s="Ct"; s.insert(1,"a");` | `Cat` 🐈 |
| **`compare()`** | Checks if they match ⚖️ | `s="A"; cout<<s.compare("A");`| `0` *(Match)* 🏆|
| **`push_back()`**| Adds 1 letter at end ➡️ | `s="A"; s.push_back('B');` | `AB` ➕ |
| **`pop_back()`** | Deletes the last letter ⬅️| `s="AB"; s.pop_back();` | `A` ➖ |
| **`getline()`** | Takes a whole line 📝 | `getline(cin, s);` | `Hi bro` 💬 |
| **`swap()`** | Swaps two strings 🔀 | `a="A", b="B"; a.swap(b);` | `a` is now `B` 🪄|
| **`front()`** | Gets the first letter 🥇 | `s="Cat"; cout<<s.front();` | `C` 🏁 |
| **`back()`** | Gets the last letter 🥈 | `s="Cat"; cout<<s.back();` | `t` 🛑 |
| **`stoi()`** | Text ➡️ Number 🧮 | `int n = stoi("10");` | `10` 🔢 |
| **`to_string()`**| Number ➡️ Text 🔠 | `string s = to_string(5);` | `"5"` 📝 |
| **`reverse()`** | Flips it backward 🤸 | `reverse(s.begin(), s.end());`| `taC` 🙃 |

*(Note: Don't forget `#include <string>` at the top of your code, and `#include <algorithm>` if you want to use `reverse()`!)*