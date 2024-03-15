#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ActionType> R& ActionType() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& ActionName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ActorId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& InventoryItemId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& DurationCoef() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1<Vec2>*& TargetPosition() {
		return *(Nullable1<Vec2>**)((uintptr_t)this + 0x34);
	}
	 Nullable1<int32_t>*& SequenceValue() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x1DBFCCC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x1DBFDF4))(this, reader);
	}

};

