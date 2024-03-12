#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContexts"));
	}

	template <typename T = int64_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& blueprint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& recipe() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& trophyRoad() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& conditions() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& configs() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& randomGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& magic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& magicTrigger() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& tournaments() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& quests() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& season() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& battlePass() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& lobby() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& inventorySlots() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& game() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& currency() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& dialogues() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = int64_t> T get_Version() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADBE4))(this);
	}
	template <typename T = void> T set_Version(int64_t value) {
		return ((T (*)(DataContexts*, int64_t))(Il2CppBase() + 0xEADBEC))(this, value);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADBF4))(this);
	}
	template <typename T = void> T set_blueprint(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADBFC))(this, value);
	}
	template <typename T = uintptr_t> T get_recipe() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC04))(this);
	}
	template <typename T = void> T set_recipe(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC0C))(this, value);
	}
	template <typename T = uintptr_t> T get_trophyRoad() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC14))(this);
	}
	template <typename T = void> T set_trophyRoad(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC1C))(this, value);
	}
	template <typename T = uintptr_t> T get_conditions() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC24))(this);
	}
	template <typename T = void> T set_conditions(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC2C))(this, value);
	}
	template <typename T = uintptr_t> T get_configs() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC34))(this);
	}
	template <typename T = void> T set_configs(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC3C))(this, value);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC44))(this);
	}
	template <typename T = void> T set_item(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC4C))(this, value);
	}
	template <typename T = uintptr_t> T get_randomGroup() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC54))(this);
	}
	template <typename T = void> T set_randomGroup(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC5C))(this, value);
	}
	template <typename T = uintptr_t> T get_action() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC64))(this);
	}
	template <typename T = void> T set_action(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC6C))(this, value);
	}
	template <typename T = uintptr_t> T get_magic() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC74))(this);
	}
	template <typename T = void> T set_magic(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC7C))(this, value);
	}
	template <typename T = uintptr_t> T get_magicTrigger() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC84))(this);
	}
	template <typename T = void> T set_magicTrigger(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC8C))(this, value);
	}
	template <typename T = uintptr_t> T get_tournaments() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADC94))(this);
	}
	template <typename T = void> T set_tournaments(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADC9C))(this, value);
	}
	template <typename T = uintptr_t> T get_quests() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCA4))(this);
	}
	template <typename T = void> T set_quests(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCAC))(this, value);
	}
	template <typename T = uintptr_t> T get_season() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCB4))(this);
	}
	template <typename T = void> T set_season(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCBC))(this, value);
	}
	template <typename T = uintptr_t> T get_battlePass() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCC4))(this);
	}
	template <typename T = void> T set_battlePass(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCCC))(this, value);
	}
	template <typename T = uintptr_t> T get_lobby() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCD4))(this);
	}
	template <typename T = void> T set_lobby(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCDC))(this, value);
	}
	template <typename T = uintptr_t> T get_inventorySlots() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCE4))(this);
	}
	template <typename T = void> T set_inventorySlots(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCEC))(this, value);
	}
	template <typename T = uintptr_t> T get_game() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADCF4))(this);
	}
	template <typename T = void> T set_game(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADCFC))(this, value);
	}
	template <typename T = uintptr_t> T get_currency() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADD04))(this);
	}
	template <typename T = void> T set_currency(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADD0C))(this, value);
	}
	template <typename T = uintptr_t> T get_dialogues() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADD14))(this);
	}
	template <typename T = void> T set_dialogues(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADD1C))(this, value);
	}
	template <typename T = uintptr_t> T get_map() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADD24))(this);
	}
	template <typename T = void> T set_map(uintptr_t value) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEADD2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEADD34))(this);
	}
	template <typename T = void> T Create(uintptr_t logger) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEAE248))(this, logger);
	}
	template <typename T = void> T Init(uintptr_t datablueprints) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEAE95C))(this, datablueprints);
	}
	template <typename T = uintptr_t> T InitAsync(uintptr_t datablueprints) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEAED7C))(this, datablueprints);
	}
	template <typename T = void> T ClearContexts() {
		return ((T (*)(DataContexts*))(Il2CppBase() + 0xEAEE18))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetContextToBlueprintConfig(uintptr_t datablueprints) {
		return ((T (*)(DataContexts*, uintptr_t))(Il2CppBase() + 0xEAEF24))(this, datablueprints);
	}

};

}
