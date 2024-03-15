#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActionContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActionContexts"));
	}


	template <typename R = ActionContext*> R get_action() {
		return ((R (*)(IActionContexts*))(Il2CppBase() + 0x0))(this);
	}

};

