#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenMapEventsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenMapEventsComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>*& EventPoints() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SeenMapEventsComponent*, Il2CppObject*))(Il2CppBase() + 0x1361B78))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SeenMapEventsComponent*, uintptr_t))(Il2CppBase() + 0x1361C10))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SeenMapEventsComponent*, uintptr_t))(Il2CppBase() + 0x1361D90))(this, writer);
	}

};

