//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : StaticData.h
//  @ Date : 2017/9/29
//  @ Author : ouo
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H


class StaticData {
public:
	static StaticData sharedStaticData();
	static viod purge();
	int intValueFormKey(std::string key);
	char stringValueFromKey(std::string key);
	float floatValueFromKey(std::string key);
	bool booleanFromKey(std::string key);
	cocos2d::CCPoint pointFromKey(std::string key);
	cocos2d::CCRect rectFromKey(std::string key);
	cocos2d::CCSize sizeFromKey(std::string key);
protected:
	const cocos2d::CCDictionary _dictionary;
	std::string _staticFileName;
	bool init();
private:
	~StaticData();
	StaticData();
};

#endif  //_STATICDATA_H