#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictHelper"));
	}


	template <typename T = void*> static T GetByEndPartKey(Il2CppDictionary<Il2CppString*, Il2CppString*>* files, Il2CppString* partKey) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x12FA3F4))(0, files, partKey);
	}

};

}
