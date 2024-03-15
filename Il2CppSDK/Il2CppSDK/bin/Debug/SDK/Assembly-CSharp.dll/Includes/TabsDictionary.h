#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SerializableDictionary2.h" 

class TabsDictionary : public SerializableDictionary2<Il2CppString*, AdvancedCheats::CustomTabContentView*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TabsDictionary"));
	}



};

