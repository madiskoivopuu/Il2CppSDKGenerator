#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenSeasonQuestsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenSeasonQuestsComponent"));
	}

	 Il2CppList<Il2CppString*>*& Names() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x10);
	}


};

