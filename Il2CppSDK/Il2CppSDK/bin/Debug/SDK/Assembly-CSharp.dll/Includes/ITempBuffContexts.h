#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITempBuffContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITempBuffContexts"));
	}


	template <typename R = TempBuffDataContext*> R get_tempBuff() {
		return ((R (*)(ITempBuffContexts*))(Il2CppBase() + 0x0))(this);
	}

};

