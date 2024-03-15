#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackMagicComponent"));
	}

	template <typename R = Il2CppString*> R& Group() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& MaxUseCount() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& DontResetDuration() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& MaxDuration() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& ByActor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<MagicByStackItem*>*> R& MagicByStack() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = bool> R HasMagicByStack() {
		return ((R (*)(StackMagicComponent*))(Il2CppBase() + 0x14894F0))(this);
	}
	template <typename R = Il2CppString*> R GetMagicByStack(int32_t stackCount) {
		return ((R (*)(StackMagicComponent*, int32_t))(Il2CppBase() + 0x1489510))(this, stackCount);
	}
	template <typename R = bool> R ContainsMagicByStack(Il2CppString* name) {
		return ((R (*)(StackMagicComponent*, Il2CppString*))(Il2CppBase() + 0x1489588))(this, name);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StackMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x148961C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StackMagicComponent*, uintptr_t))(Il2CppBase() + 0x14896EC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StackMagicComponent*, uintptr_t))(Il2CppBase() + 0x148987C))(this, writer);
	}

};

