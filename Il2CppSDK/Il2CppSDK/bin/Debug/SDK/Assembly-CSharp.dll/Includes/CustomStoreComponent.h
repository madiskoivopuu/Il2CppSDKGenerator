#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreComponent"));
	}

	template <typename T = Il2CppString*> T& NPC_Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& NPC_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& NPC_Icon_Back() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& NPC_Text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& NPC_Done_Text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Tracery_Icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Logo_Icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Logo_PosXDelta() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& BackgroundTileImage() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& RightAlignment() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& TempBuffName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& MainColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& BottomColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ProgressColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& TextColor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& LockedTextColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& UpdateStorePrice() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& BestRewardsRGNormal() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& BestRewardsRGPremium() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& AnalyticsEventName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = StoreCategory*> T& StoreCategory() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& Currencies() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& CurrenciesIcon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CustomStoreComponent*, Il2CppObject*))(Il2CppBase() + 0x1BD7A90))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CustomStoreComponent*, uintptr_t))(Il2CppBase() + 0x1BD7C68))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CustomStoreComponent*, uintptr_t))(Il2CppBase() + 0x1BD80BC))(this, writer);
	}

};

