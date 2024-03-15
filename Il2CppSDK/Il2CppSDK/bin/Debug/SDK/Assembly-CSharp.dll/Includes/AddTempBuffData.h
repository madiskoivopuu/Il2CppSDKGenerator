#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddTempBuffData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddTempBuffData"));
	}

	template <typename R = Il2CppString*> R& BlueprintName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& PrefabName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& DescriptionCaption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<Icon>*& Icon() {
		return *(Nullable1<Icon>**)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& UniqueLookup() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& IsActive() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& IsTemporary() {
		return *(R*)((uintptr_t)this + 0x51);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int64_t> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& OBTStartTime() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int64_t> R& OBTEndTime() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int64_t> R& QAStartTime() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int64_t> R& QAEndTime() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = CyclicTime> R& CyclicTime() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& InfoDialogue() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = bool> R& HasToolTip() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = ToolTipValue*> R& ToolTipValue() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Quests() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ApplyTargetMagicComponent*> R& Magics() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> R& Point() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Nullable1<int32_t>*& Version() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xE8);
	}
	template <typename R = float> R& TransactionDuration() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Ease> R& TransactionEase() {
		return *(R*)((uintptr_t)this + 0xF4);
	}
	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = bool> R& ServerLifeTime() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AddTempBuffData*, uintptr_t))(Il2CppBase() + 0x18B0548))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AddTempBuffData*, uintptr_t))(Il2CppBase() + 0x18B0804))(this, reader);
	}

};

