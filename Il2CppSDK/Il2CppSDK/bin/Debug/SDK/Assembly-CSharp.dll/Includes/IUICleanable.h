#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUICleanable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUICleanable"));
	}


	template <typename R = void> R Clean() {
		return ((R (*)(IUICleanable*))(Il2CppBase() + 0x0))(this);
	}

};
