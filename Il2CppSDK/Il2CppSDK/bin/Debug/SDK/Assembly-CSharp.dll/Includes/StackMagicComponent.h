#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackMagicComponent"));
	}

	template <typename T = Il2CppString*> T& Group() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxUseCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& DontResetDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MaxDuration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& ByActor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MagicByStack() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T HasMagicByStack() {
		return ((T (*)(StackMagicComponent*))(Il2CppBase() + 0x14894F0))(this);
	}
	template <typename T = Il2CppString*> T GetMagicByStack(int32_t stackCount) {
		return ((T (*)(StackMagicComponent*, int32_t))(Il2CppBase() + 0x1489510))(this, stackCount);
	}
	template <typename T = bool> T ContainsMagicByStack(Il2CppString* name) {
		return ((T (*)(StackMagicComponent*, Il2CppString*))(Il2CppBase() + 0x1489588))(this, name);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(StackMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x148961C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StackMagicComponent*, uintptr_t))(Il2CppBase() + 0x14896EC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StackMagicComponent*, uintptr_t))(Il2CppBase() + 0x148987C))(this, writer);
	}

};

