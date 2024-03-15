#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GlobalTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& IconImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& BannerImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& EndTimeText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& MinPointsToRewardText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& PositionsContainer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& PositionPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = GlobalTournamentPlayerView*> R& PlayerViewPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = GlobalTournamentPlayerView*> R& SelfView() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& Loading() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& ErrorMsg() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& PlayersContainer() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardsPanel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardsContainer() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardPointsObject() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& GuaranteedRewardPointsImage() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& GuaranteeResultPreogressBar() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = GlobalTournamentGuaranteeResultView*> R& GuaranteeResultView() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& requested() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = Il2CppArray<int64_t>*> static R& ratingIds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& lastUpdateTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = int64_t> static R& UpdateTimer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<GlobalTournamentGuaranteeResultView*>*> R& _guaranteeResultViews() {
		return *(R*)((uintptr_t)this + 0x120);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DB720))(this);
	}
	template <typename R = void> R InitGuaranteedRewards(ICommonUnityWorld* world, TournamentEntity* tournament) {
		return ((R (*)(GlobalTournamentWindow*, ICommonUnityWorld*, TournamentEntity*))(Il2CppBase() + 0x12DC208))(this, world, tournament);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GlobalTournamentWindow*, float))(Il2CppBase() + 0x12DD604))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DBF84))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DDB0C))(this);
	}
	template <typename R = void> R FillRating(Il2CppArray<PlayerEntity*>* playerEntities) {
		return ((R (*)(GlobalTournamentWindow*, Il2CppArray<PlayerEntity*>*))(Il2CppBase() + 0x12DCC2C))(this, playerEntities);
	}
	template <typename R = bool> R NeedToUpdateRating(uintptr_t* playerEntities) {
		return ((R (*)(GlobalTournamentWindow*, uintptr_t*))(Il2CppBase() + 0x12DC6EC))(this, playerEntities);
	}
	template <typename R = void> R OnGlobalTournamentsPlayersFound(ProtoTools::ErrorCodes* code, Il2CppArray<int64_t>* playerIds) {
		return ((R (*)(GlobalTournamentWindow*, ProtoTools::ErrorCodes*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x12DDB78))(this, code, playerIds);
	}

};

