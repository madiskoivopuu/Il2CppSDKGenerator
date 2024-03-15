#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IToFromDataString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IToFromDataString"));
	}


	template <typename R = Il2CppString*> R ToDataString() {
		return ((R (*)(IToFromDataString*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R FromDataString(Il2CppString* aData) {
		return ((R (*)(IToFromDataString*, Il2CppString*))(Il2CppBase() + 0x0))(this, aData);
	}

};

}
