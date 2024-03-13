#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITempBuffContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITempBuffContexts"));
	}


	template <typename T = TempBuffDataContext*> T get_tempBuff() {
		return ((T (*)(ITempBuffContexts*))(Il2CppBase() + 0x0))(this);
	}

};

