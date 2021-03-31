# -*- coding: UTF-8 -*-
from bs4 import BeautifulSoup
import requests
URL = "https://weather.naver.com/rgn/cityWetrMain.nhn"  #지역별 날씨
html = requests.get(URL).text
soup = BeautifulSoup(html, 'html.parser')
print(soup)
