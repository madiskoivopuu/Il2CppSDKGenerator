#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class LocationNeedQuests : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationNeedQuests"));
	}

	 Il2CppList<TextImageMonoBehaviour*>*& Icons() {
		return *(Il2CppList<TextImageMonoBehaviour*>**)((uintptr_t)this + 0x20);
	}


};

