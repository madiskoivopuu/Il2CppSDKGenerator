#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicContext"));
	}


	template <typename R = MagicContext*> R get_magic() {
		return ((R (*)(IMagicContext*))(Il2CppBase() + 0x0))(this);
	}

};

