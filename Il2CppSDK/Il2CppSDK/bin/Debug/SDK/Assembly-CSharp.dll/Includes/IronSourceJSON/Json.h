#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IronSourceJSON {

class Json
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IronSourceJSON", "Json"));
	}


	template <typename T = Il2CppObject*> static T Deserialize(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x14E6AB4))(0, json);
	}
	template <typename T = Il2CppString*> static T Serialize(Il2CppObject* obj) {
		return ((T (*)(void *, Il2CppObject*))(Il2CppBase() + 0x14E6AC4))(0, obj);
	}

};

}
