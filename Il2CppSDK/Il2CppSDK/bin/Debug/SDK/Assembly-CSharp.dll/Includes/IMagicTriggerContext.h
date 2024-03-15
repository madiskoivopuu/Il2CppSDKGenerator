#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerContext"));
	}


	template <typename R = MagicTriggerContext*> R get_magicTrigger() {
		return ((R (*)(IMagicTriggerContext*))(Il2CppBase() + 0x0))(this);
	}

};

