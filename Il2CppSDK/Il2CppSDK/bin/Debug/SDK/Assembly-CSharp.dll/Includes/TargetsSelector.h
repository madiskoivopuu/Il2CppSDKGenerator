#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelector"));
	}

	template <typename T = TargetsSelectorType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& UniqueName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Cones() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LocalRotation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = RelationshipTypes*> T& Relationship() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& OnlyPlayers() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& IgnoreActor() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& IgnoreCenter() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& LookAtCenter() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = bool> T& WallTrace() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& Random() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& Offset() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& Movable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& Nearest() {
		return *(T*)((uintptr_t)this + 0x79);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(TargetsSelector*, Il2CppObject*))(Il2CppBase() + 0x16A64E8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TargetsSelector*, uintptr_t))(Il2CppBase() + 0x16A6654))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TargetsSelector*, uintptr_t))(Il2CppBase() + 0x16A6ABC))(this, writer);
	}

};

