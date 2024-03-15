#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEffectContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEffectContexts"));
	}


	template <typename R = EffectContext*> R get_effect() {
		return ((R (*)(IEffectContexts*))(Il2CppBase() + 0x0))(this);
	}

};

