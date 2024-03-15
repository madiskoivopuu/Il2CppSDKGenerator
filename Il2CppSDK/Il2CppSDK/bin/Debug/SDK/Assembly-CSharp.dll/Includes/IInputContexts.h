#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInputContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInputContexts"));
	}


	template <typename R = InputContext*> R get_input() {
		return ((R (*)(IInputContexts*))(Il2CppBase() + 0x0))(this);
	}

};

