#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IToFromDataString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IToFromDataString"));
	}


	template <typename T = Il2CppString*> T ToDataString() {
		return ((T (*)(IToFromDataString*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FromDataString(Il2CppString* aData) {
		return ((T (*)(IToFromDataString*, Il2CppString*))(Il2CppBase() + 0x0))(this, aData);
	}

};

}
