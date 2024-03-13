#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ActionType*> T& ActionType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& ActionName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& InventoryItemId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DurationCoef() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1Vec2*>*> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Nullable1int32_t>*> T& SequenceValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x1DBFCCC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x1DBFDF4))(this, reader);
	}

};

