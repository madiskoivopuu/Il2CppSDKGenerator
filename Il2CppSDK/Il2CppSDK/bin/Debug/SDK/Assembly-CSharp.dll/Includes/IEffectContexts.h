#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEffectContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEffectContexts"));
	}


	template <typename T = EffectContext*> T get_effect() {
		return ((T (*)(IEffectContexts*))(Il2CppBase() + 0x0))(this);
	}

};

