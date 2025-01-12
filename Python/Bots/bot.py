from webserver import keep_alive
import disnake
emoji = '🇯🇵'
emoji1 = '☭'
emoji2 = '卐'
emoji3 = 'Ⴜ'
emoji4 = '🇺🇸'
emoji5 = '🇨🇳'
emoji6 = '🇨🇦'
emoji7 = '🇫🇷'
emoji8 = '🇳🇱'
emoji9 = '🇫🇮🇩🇰'


import random

from disnake.ext import commands

bot = commands.Bot(command_prefix="*", intents=disnake.Intents.all())


@bot.slash_command()
async def test(interaction: disnake.AppCmdInter):
  await interaction.send(
    "My bot xddd(https://github.com/Fozu7916 my git i love u ) ")


@bot.slash_command()
async def gimmeinfo(inter: disnake.ApplicationCommandInteraction):
    await inter.response.send_message("What bot can do?    \n   1. Выбирать рандомную фразу из заготовленного списка /speak  \n    2.  Мастерить \n   3. Выбирать страну для шедеврохойки4 \n    4. Летать \n" )


@bot.slash_command()
async def speak(inter: disnake.ApplicationCommandInteraction):
   x = random.choice('0123456789')
   if(x=='1'):
    await inter.response.send_message("lmfao u are bread dummy")
   if(x=='2'):
    await inter.response.send_message("2. Я ОБЬЯВЛЯЮ ВОЙНУ")
   if(x=='3'):
    await inter.response.send_message("3. МИНУС АДОЛЬФИК")
   if(x=='4'):
    await inter.response.send_message("4. Ya lox devstvennik")
   if(x=='5'):
    await inter.response.send_message("5. Tell me why tell why tell my why(berserk reference)")
   if(x=='6'):
    await inter.response.send_message("6. Вот бы в хоечку ")
   if(x=='7'):
    await inter.response.send_message("7. Mama mia this is python")
   if(x=='8'):
    await inter.response.send_message("8. C++ sila C# mogila")
   if(x=='9'):
    await inter.response.send_message("9. O KAK JE HOROSHO CHTO MOUA TIMA NE VKURSE")
   if(x=='0'):
    await inter.response.send_message("0. Go 1v1 sf lobbi")

@bot.slash_command()
async def сountryсhoise(inter: disnake.ApplicationCommandInteraction):
   x = random.choice('0123456789')
   if(x=='1'):
    await inter.response.send_message("Япония " + emoji)
   if(x=='2'):
    await inter.response.send_message("Советский союз " + emoji1)
   if(x=='3'):
    await inter.response.send_message("Третий Рейх " + emoji2)
   if(x=='4'):
    await inter.response.send_message("Российская Империя " + emoji3)
   if(x=='5'):
    await inter.response.send_message("Нефть " + emoji4)
   if(x=='6'):
    await inter.response.send_message("Китай " + emoji5)
   if(x=='7'):
    await inter.response.send_message("Канада " + emoji6)
   if(x=='8'):
    await inter.response.send_message("Франция" + emoji7)
   if(x=='9'):
    await inter.response.send_message("Пидорлнядия " + emoji8)
   if(x=='0'):
    await inter.response.send_message("Даник - Финик " + emoji9)




keep_alive()
bot.run(
  "MTEzMTYyMzQwNjQyMTQxNDAzOQ.GM2wz6.2vus8ToqisnUcnncbzIOmudKr6P3yuxlmJET90")