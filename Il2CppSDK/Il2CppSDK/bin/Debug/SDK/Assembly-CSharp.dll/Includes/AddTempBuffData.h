#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddTempBuffData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddTempBuffData"));
	}

	template <typename T = Il2CppString*> T& BlueprintName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& PrefabName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& DescriptionCaption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1Icon*>*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& UniqueLookup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsActive() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsTemporary() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& OBTStartTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int64_t> T& OBTEndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int64_t> T& QAStartTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& QAEndTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = CyclicTime*> T& CyclicTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& InfoDialogue() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& HasToolTip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = ToolTipValue*> T& ToolTipValue() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Quests() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ApplyTargetMagicComponent*> T& Magics() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& Point() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Nullable1int32_t>*> T& Version() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& TransactionDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Ease*> T& TransactionEase() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& ServerLifeTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AddTempBuffData*, uintptr_t))(Il2CppBase() + 0x18B0548))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AddTempBuffData*, uintptr_t))(Il2CppBase() + 0x18B0804))(this, reader);
	}

};

