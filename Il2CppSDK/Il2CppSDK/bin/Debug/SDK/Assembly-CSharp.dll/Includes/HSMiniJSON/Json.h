#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HSMiniJSON {

class Json
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HSMiniJSON", "Json"));
	}


	template <typename R = Il2CppObject*> static R Deserialize(Il2CppString* json) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x14E6A9C))(0, json);
	}
	template <typename R = Il2CppString*> static R Serialize(Il2CppObject* obj) {
		return ((R (*)(void *, Il2CppObject*))(Il2CppBase() + 0x14E6AAC))(0, obj);
	}

};

}
