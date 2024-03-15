#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanContexts"));
	}


	template <typename R = ClanContext*> R get_clans() {
		return ((R (*)(IClanContexts*))(Il2CppBase() + 0x0))(this);
	}

};

