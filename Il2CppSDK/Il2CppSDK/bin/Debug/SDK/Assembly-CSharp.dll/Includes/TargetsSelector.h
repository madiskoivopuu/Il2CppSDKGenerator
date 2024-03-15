#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelector"));
	}

	template <typename R = TargetsSelectorType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& UniqueName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<TargetsSelectorCone*>*> R& Cones() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& LocalRotation() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& MinDistance() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = RelationshipTypes*> R& Relationship() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& OnlyPlayers() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = bool> R& IgnoreActor() {
		return *(R*)((uintptr_t)this + 0x5D);
	}
	template <typename R = bool> R& IgnoreCenter() {
		return *(R*)((uintptr_t)this + 0x5E);
	}
	template <typename R = bool> R& LookAtCenter() {
		return *(R*)((uintptr_t)this + 0x5F);
	}
	template <typename R = bool> R& WallTrace() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = bool> R& Random() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = float> R& Height() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& Offset() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = bool> R& Movable() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& Nearest() {
		return *(R*)((uintptr_t)this + 0x79);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TargetsSelector*, Il2CppObject*))(Il2CppBase() + 0x16A64E8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TargetsSelector*, uintptr_t))(Il2CppBase() + 0x16A6654))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TargetsSelector*, uintptr_t))(Il2CppBase() + 0x16A6ABC))(this, writer);
	}

};

