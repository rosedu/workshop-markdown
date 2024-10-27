<!-- This is my very first md file -->

# This is my very first md file done entirely by me<br>

### There will be separate sections so to present the GFM (Github Flavoured Markdown)<br><br>

#### First section<br><br>

| Cars | Model | Engine Type | Year |
| ---- | ----- | ------ | ---- |
| BMW | X5 | Diesel | 2005 |
| Mercedes Benz | EClass | Diesel | 2019 |
| ARO | M series | Gasoline | 1959 |
| Honda | Gasoline | Civic | 2018 |
| Audi | A6 | Diesel | 2020 |

<br>

> [!NOTE]
> Note that there is a Romanian car brand as well, spot it!

<details>
<summary> Expand for the answer </summary>

#### Answer:
> ARO stands for *Auto România* and is a Romanian car brand from 1957.
</details>
<br>

> [!TIP]
> To continue, you need a bit of Bash scripting and Linux knowledge.
<br>

#### Second section

1. ##### What does the following code snippet do?

```Bash
#!/bin/bash

while true; do
  echo "Hello, World!"
  sleep 1h
done
```

<details>
<summary> Expand for the answer </summary>

#### Answer:
> It prints the message between double quotes every hour until it is stopped.
</details>

2. ##### Was the previous code working in the background or foreground?
<details>
<summary> Expand for the answer </summary>

#### Answer:
> It was running in the foreground and you cannot use the terminal until the process terminates!
</details>

3. ##### How can you send the process to the background?
<details>
<summary> Expand for the answer </summary>

#### Answer:
> First you have to pause it with `Ctrl + z` then you have to run `bg`
</details>

4. ##### Is there a way to start the script running directly in the background?
<details>
<summary> Expand for the answer </summary>

#### Answer:
> The answer is **Yes**. You have to run the script as follows: `./myScript.sh &`
</details>


