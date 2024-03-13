#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class LocationNeedQuests : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationNeedQuests"));
	}

	template <typename T = Il2CppList<TextImageMonoBehaviour*>*> T& Icons() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

