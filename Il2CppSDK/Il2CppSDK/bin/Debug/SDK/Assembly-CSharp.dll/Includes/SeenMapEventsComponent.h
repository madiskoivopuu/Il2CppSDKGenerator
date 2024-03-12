#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenMapEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenMapEventsComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& EventPoints() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SeenMapEventsComponent*, uintptr_t))(Il2CppBase() + 0x1361B78))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SeenMapEventsComponent*, uintptr_t))(Il2CppBase() + 0x1361C10))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SeenMapEventsComponent*, uintptr_t))(Il2CppBase() + 0x1361D90))(this, writer);
	}

};

}
