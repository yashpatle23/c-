#lex_auth_01269444195664691284

def encrypt_sentence(sentence):
    list=sentence.split()
    str=""
    for y in range(0,len(list)):
        str=str+list[y][::-1]
        str=str+" "
    return str
    #start writing your code here

sentence="The sun rises in the east"
encrypted_sentence=encrypt_sentence(sentence)
print(encrypted_sentence)