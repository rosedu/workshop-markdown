# Aplicatie de monitorizare si analiza a starii emotionale

## Despre

Acest document descrie o aplicație web de monitorizare și analiză a stării emoționale, creată ca proiect de semestru.
Aplicația permite înregistrarea zilnică a stării emoționale și oferă predicții bazate pe modele de machine learning.
Exemplu de _italic_, **bold**, și ~~text tăiat~~.

## Funcționalități

Aplicația mea de monitorizare a stării emoționale include:

- Scor zilnic calculat prin Ridge Regression
- Clasificare a tipului de zi (Naive Bayes)
- Streak de înregistrare zilnică
- Alertă pe bază de pattern (ex: somn insuficient 3 zile consecutiv)

## Pași de instalare

1. Clonează repository-ul
1. Instalează dependențele cu `pip install -r requirements.txt`
1. Rulează serverul Flask cu `python app.py`
1. Accesează aplicația în browser

## Stack tehnologic

 Componentă | Tehnologie
 --- | ---
 Backend | Spring Boot 3.5.11
 Bază de date | SQL Server
 Frontend | Thymeleaf
 Microserviciu ML | Python / Flask

## Exemplu de cod

```python
from sklearn.linear_model import Ridge

model = Ridge(alpha=1.0)
model.fit(X_train, y_train)
score = model.predict(X_today)
```

## Resurse utile

Pentru mai multe detalii despre regresia Ridge, vezi [documentația scikit-learn](https://scikit-learn.org/stable/modules/linear_model.html#ridge-regression).

## Captură de ecran

![dashboard](https://github.com/AnnaHalca04/emotional-monitoring-app/blob/main/dashboard.png)

---

Mulțumesc pentru citire! :blush: