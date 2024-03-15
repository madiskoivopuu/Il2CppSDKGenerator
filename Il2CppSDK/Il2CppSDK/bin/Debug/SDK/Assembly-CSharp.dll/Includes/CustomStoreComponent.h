#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreComponent"));
	}

	template <typename R = Il2CppString*> R& NPC_Icon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& NPC_Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& NPC_Icon_Back() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& NPC_Text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& NPC_Done_Text() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Tracery_Icon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Logo_Icon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& Logo_PosXDelta() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& BackgroundTileImage() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& RightAlignment() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& TempBuffName() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& MainColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& BottomColor() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& ProgressColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& TextColor() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& LockedTextColor() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& UpdateStorePrice() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& BestRewardsRGNormal() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& BestRewardsRGPremium() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& AnalyticsEventName() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = StoreCategory*> R& StoreCategory() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Il2CppList<Il2CppString*>*& Currencies() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0xB8);
	}
	 Il2CppList<Il2CppString*>*& CurrenciesIcon() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CustomStoreComponent*, Il2CppObject*))(Il2CppBase() + 0x1BD7A90))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CustomStoreComponent*, uintptr_t))(Il2CppBase() + 0x1BD7C68))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CustomStoreComponent*, uintptr_t))(Il2CppBase() + 0x1BD80BC))(this, writer);
	}

};

