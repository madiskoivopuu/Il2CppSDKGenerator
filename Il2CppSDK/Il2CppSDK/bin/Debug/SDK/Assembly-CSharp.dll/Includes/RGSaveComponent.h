#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSaveComponent"));
	}

	 Il2CppDictionary<Il2CppString*, RGSave*>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, RGSave*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RGSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x170C974))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RGSaveComponent*, uintptr_t))(Il2CppBase() + 0x170CA8C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RGSaveComponent*, uintptr_t))(Il2CppBase() + 0x170CC80))(this, writer);
	}

};

