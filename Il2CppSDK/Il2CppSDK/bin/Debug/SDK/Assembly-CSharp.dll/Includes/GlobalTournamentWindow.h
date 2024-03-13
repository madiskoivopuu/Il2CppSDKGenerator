#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GlobalTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& IconImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BannerImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& EndTimeText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MinPointsToRewardText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& PositionsContainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PositionPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = GlobalTournamentPlayerView*> T& PlayerViewPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = GlobalTournamentPlayerView*> T& SelfView() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Loading() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ErrorMsg() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PlayersContainer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardsPanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardsContainer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardPointsObject() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& GuaranteedRewardPointsImage() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& GuaranteeResultPreogressBar() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = GlobalTournamentGuaranteeResultView*> T& GuaranteeResultView() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& requested() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ratingIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& lastUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int64_t> static T& UpdateTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guaranteeResultViews() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DB720))(this);
	}
	template <typename T = void> T InitGuaranteedRewards(ICommonUnityWorld* world, TournamentEntity* tournament) {
		return ((T (*)(GlobalTournamentWindow*, ICommonUnityWorld*, TournamentEntity*))(Il2CppBase() + 0x12DC208))(this, world, tournament);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GlobalTournamentWindow*, float))(Il2CppBase() + 0x12DD604))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DBF84))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GlobalTournamentWindow*))(Il2CppBase() + 0x12DDB0C))(this);
	}
	template <typename T = void> T FillRating(Il2CppArray<uintptr_t>* playerEntities) {
		return ((T (*)(GlobalTournamentWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12DCC2C))(this, playerEntities);
	}
	template <typename T = bool> T NeedToUpdateRating(uintptr_t* playerEntities) {
		return ((T (*)(GlobalTournamentWindow*, uintptr_t*))(Il2CppBase() + 0x12DC6EC))(this, playerEntities);
	}
	template <typename T = void> T OnGlobalTournamentsPlayersFound(ErrorCodes* code, Il2CppArray<uintptr_t>* playerIds) {
		return ((T (*)(GlobalTournamentWindow*, ErrorCodes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12DDB78))(this, code, playerIds);
	}

};

