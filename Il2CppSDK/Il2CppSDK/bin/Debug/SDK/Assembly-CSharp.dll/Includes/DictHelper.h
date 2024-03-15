#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictHelper"));
	}


	 static ValueTuple2Il2CppString*, bool>* GetByEndPartKey(Il2CppDictionary<Il2CppString*, Il2CppString*>* files, Il2CppString* partKey) {
		return ((ValueTuple2Il2CppString*, bool>* (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x12FA3F4))(0, files, partKey);
	}

};

